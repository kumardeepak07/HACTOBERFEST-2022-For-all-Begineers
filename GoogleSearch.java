public class GoogleSearch {

	public static void main(String[] args) {
	SearchAll a = new SearchAll();
	SearchImages i = new SearchImages();
	SearchVideos v = new SearchVideos();
	
	a.search();
	a.message();
	
	i.search();
	i.message();
	
	v.search();
	v.message();

	}

}
///abstract class(0-100%)
abstract class Google{
	//abstract method
	abstract void search();
	
	//non abstract method
	void message() {
		System.out.println("Thankyou for using googke");
	}
}

class SearchAll extends Google{
	@Override
	void search() {
		System.out.println("All are searched");
		
	}
}

class SearchImages extends Google{
	 @Override
	void search() {
		System.out.println("All images are searched");
		
	}
}

class SearchVideos extends Google{
	@Override
	void search() {
	   System.out.println("All videos are searched");
	}
}
