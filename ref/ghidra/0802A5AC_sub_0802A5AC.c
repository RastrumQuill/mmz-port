// sub_0802A5AC at 0x0802A5AC (thumb)

undefined4 sub_0802A5AC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0);
  sub_080297C0(param_1);
  sub_08029874(param_1,&DAT_082acd1c,0x60);
  *(undefined4 *)(param_1 + 0xb0) = 0x802b11d;
  *(undefined *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0x4c) + -0x5800;
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0x50) + -0x4800;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc3) = 6;
  *(undefined *)(param_1 + 0xe0) = 0;
  *(undefined *)(param_1 + 0xe1) = 0;
  *(undefined *)(param_1 + 0xe2) = 0;
  *(undefined *)(param_1 + 0xe3) = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (*(byte *)(DAT_02022b20 + 1) < 5) {
    *(undefined *)(param_1 + 0xc4) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xc4) = 0x48;
  }
  sub_080014E8(&DAT_084b812c,(DAT_02022ebe - 0x340) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084b8138,(DAT_02022f3f - 7) * 0x20 + 0x200);
  sub_080014E8(&DAT_084b817c,(DAT_02022ec6 - 0x200) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084b8188,(DAT_02022f43 - 4) * 0x20 + 0x200);
  sub_080014E8(&DAT_084b8190,(DAT_02022ec8 - 0x300) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084b819c,(DAT_02022f44 - 9) * 0x20 + 0x200);
  sub_080014E8(&DAT_08510078,(DAT_0202317c - 0x380) * 0x20 + 0x10000);
  sub_0800179C(&DAT_08510084,(DAT_02023126 - 8) * 0x20 + 0x200);
  uVar1 = 0;
  do {
    sub_08053D2C(param_1,uVar1 & 0xff);
    sub_0809E944(param_1,uVar1 & 0xff);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  sub_080554EC(param_1);
  sub_0805567C(param_1);
  sub_080A3470(param_1);
  sub_0809E998(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0802A798(param_1);
  return in_lr;
}

