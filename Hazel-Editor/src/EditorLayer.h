#pragma once

#include "Hazel.h"

namespace Hazel {
    class EditorLayer : public Layer
    {
        public:
            EditorLayer();
            virtual ~EditorLayer() = default;

            virtual void OnAttach() override;
            virtual void OnDetach() override;

            void OnUpdate(Timestep ts) override;
            virtual void OnImGuiRender() override;
            void OnEvent(Event& e) override;

        private:
            OrthographicCameraController m_CameraController;

            Ref<VertexArray> m_SquareVA;
            Ref<Shader> m_FlatColorShader;
            Ref<Framebuffer> m_Framebuffer;
            Ref<Texture2D> m_CheckerboardTexture;
            Ref<Texture2D> m_SpriteSheet;
            Ref<SubTexture2D> m_TextureStairs, m_TextureBarrel, m_TextureTree;

            glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };

    };
}