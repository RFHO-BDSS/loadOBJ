#include<pcl/io/obj_io.h>
#include <pcl/visualization/pcl_visualizer.h>


int main(int argc, char** argv)
{
	
	pcl::TextureMesh texture_mesh;

	int loaded = pcl::io::loadOBJFile("../../data/Model.obj",texture_mesh);
	cout << "texture mesh loaded: " << std::to_string(loaded) << "\n";

	pcl::io::saveOBJFile("../../data/save_test.obj", texture_mesh);


	boost::shared_ptr<pcl::visualization::PCLVisualizer> result_view(new pcl::visualization::PCLVisualizer("Viewer"));
	result_view->addTextureMesh(texture_mesh, "texture mesh", 0);

	while (!result_view->wasStopped())
	{
		//---{ update the viewer }
		result_view->spinOnce(100);
		boost::this_thread::sleep(boost::posix_time::microseconds(100000));
	}


	return 0;
}

