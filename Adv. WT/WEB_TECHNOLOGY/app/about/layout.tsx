import React from 'react'
import Link from "next/link";
import { Star } from 'lucide-react';



function RootLayout({ children }: { children: React.ReactNode; }) {
    return (
        <section className=" masthead page-section bg-info text-white mb-0" id="about">
            <div className="container">

                <h2 className="page-section-heading text-center text-uppercase text-white">About US</h2>

                <div className="divider-custom divider-light">
                    <div className="divider-custom-line"></div>
                    <div className="divider-custom-icon"><Star size={40}/></div>
                    <div className="divider-custom-line"></div>
                </div>

                <div className="container">
                    {children}
                </div>

                <div className="row p-2 m-5">
                    <div className="col text-center mt-4">
                        <Link className="btn btn-xl btn-outline-light text-black" href="/about/skills">
                            Skills
                        </Link>
                        <div className="col text-center mt-4">
                            <Link className="btn btn-xl btn-outline-light text-black" href="/about/experience">
                                Experience
                            </Link>
                        </div>
                    </div>
                </div>

            </div>
        </section>
    )
}

export default RootLayout