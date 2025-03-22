export default function RecentPost() {
  const posts = [
    {
      id: 1,
      imgSrc: "/img/blog/blog-1.jpg",
      date: "DECEMBER 12",
      title: "Eum ad dolor et. Autem aut fugiat debitis",
      author: "Julia Parker",
      category: "Politics",
      href: "/read-more",
    },
    {
      id: 2,
      imgSrc: "/img/blog/blog-2.jpg",
      date: "JULY 17",
      title: "Et repellendus molestiae qui est sed omnis",
      author: "Mario Douglas",
      category: "Sports",
      href: "/read-more",
    },
    {
      id: 3,
      imgSrc: "/img/blog/blog-3.jpg",
      date: "SEPTEMBER 05",
      title: "Quia assumenda est et veritati tirana ploder",
      author: "Lisa Hunter",
      category: "Economics",
      href: "/read-more",
    },
  ];

  return (
    <div className="container py-5">
      <span className="d-block text-center fs-3 mt-4 text-black-50">Recent Posts</span>
      <span className="d-block text-center fs-3 my-4">Necessitatibus eius consequatur</span>
      <div className="row mt-5">
        {posts.map((post) => (
          <div key={post.id} className="col-lg-4 col-md-6 col-sm-12 mb-4">
            <article className="card">
              <div className="position-relative">
                <img src={post.imgSrc} className="card-img-top" alt={`Blog post titled ${post.title}`} />
                <div className="card-date">{post.date}</div>
              </div>
              <div className="card-body">
                <h5 className="card-title">{post.title}</h5>
                <div className="meta">
                  <i className="fas fa-user" /> {post.author} /
                  <i className="fas fa-folder" /> {post.category}
                </div>
                <a href={post.href}>Read More →</a>
              </div>
            </article>
          </div>
        ))}
      </div>
    </div>
  );
}
