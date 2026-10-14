// sub_0802DA48 at 0x0802DA48 (thumb)

undefined4 sub_0802DA48(int param_1)

{
  undefined4 in_lr;
  
  sub_080296B0();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0);
  sub_080297C0(param_1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined *)(param_1 + 0xba) = 0;
  *(undefined *)(param_1 + 0xbb) = 0;
  if (*(byte *)(DAT_02022b20 + 1) < 5) {
    *(undefined *)(param_1 + 0xbc) = 0x18;
  }
  else {
    *(undefined *)(param_1 + 0xbc) = 0;
  }
  *(undefined *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xb4;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined *)(param_1 + 0xd8) = 0;
  DAT_02022ae0 = DAT_02022ae0 & 0x3f;
  DAT_02022ae1 = DAT_02022ae1 & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0802E428(param_1);
  sub_0805CAD0(param_1);
  sub_0805CB24(param_1);
  sub_0805CB78(param_1);
  sub_0805D940(param_1);
  sub_0805C80C(param_1);
  sub_0802DB44(param_1);
  return in_lr;
}

