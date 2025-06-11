import Image from "next/image";
import styles from "./page.module.css";
import { Star } from 'lucide-react';

export default function Home() {
  return (
       <header className="masthead bg-info text-white text-center">
          <div className="container d-flex align-items-center flex-column">

            <img className="masthead-avatar mb-5" src="assets/img/avataaars.svg" alt="..." />

            <h1 className="masthead-heading text-uppercase mb-0">Prince Dudhatra</h1>

            <div className="divider-custom divider-light">
              <div className="divider-custom-line"></div>
              <div className="divider-custom-icon"><Star size={100}/></div>
              <div className="divider-custom-line"></div>
            </div>

            <p className="masthead-subheading font-weight-light mb-0">Ai expert - Web Designer - Developer</p>
          </div>
        </header>
  );
}
