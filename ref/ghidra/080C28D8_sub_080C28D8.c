// sub_080C28D8 at 0x080C28D8 (thumb)

undefined4 sub_080C28D8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0x9ee) = 0;
  *(undefined4 *)(param_1 + 0x9f0) = 0;
  *(undefined *)(param_1 + 0x9ec) = 0;
  *(undefined *)(param_1 + 0x9f8) = DAT_0202b72a;
  *(undefined *)(param_1 + 0x9f9) = DAT_0202b72b;
  *(undefined *)(param_1 + 0x9fa) = DAT_0202b73d;
  sub_080C2F3C(param_1);
  sub_080C2D9C(param_1);
  sub_080C2E2C(param_1);
  sub_080C30B0(param_1 + 0xa90,0);
  sub_0800DB7C(DAT_02023210);
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080C2968(param_1);
  return in_lr;
}

