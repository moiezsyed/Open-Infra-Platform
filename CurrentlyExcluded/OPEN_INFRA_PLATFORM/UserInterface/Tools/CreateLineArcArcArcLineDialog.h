/*
    Copyright (c) 2021 Technical University of Munich
    Chair of Computational Modeling and Simulation.

    TUM Open Infra Platform is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License Version 3
    as published by the Free Software Foundation.

    TUM Open Infra Platform is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include "ui_CreateLineArcArcArcLine.h"
#include "functions.h"

namespace OpenInfraPlatform
{
	namespace UserInterface
	{
		class CreateLineArcArcArcLineDialog : public QDialog
		{
			Q_OBJECT;

		public:
			CreateLineArcArcArcLineDialog(QWidget *parent = nullptr);

			virtual ~CreateLineArcArcArcLineDialog();
			
		protected:
			virtual void changeEvent(QEvent* evt) override;

			private Q_SLOTS:
			void on_pushButtonGenerate_clicked();
			void on_pushButtonCancel_clicked();

			public Q_SLOTS:
			void takePoints(std::vector<buw::Vector3d> givenPoints, buw::Vector2d givenOffset)
			{
				points_ = givenPoints;
				offset_ = givenOffset;
			};
		private:
			std::vector<buw::Vector3d> points_;
			buw::Vector2d offset_;			Ui::CreateLineArcArcArcLine*	ui_;
		}; // end class CreateLineArcArcArcLine
	} // end namespace UserInterface
} // end namespace OpenInfraPlatfom

namespace buw
{
	using OpenInfraPlatform::UserInterface::CreateLineArcArcArcLineDialog;
}

