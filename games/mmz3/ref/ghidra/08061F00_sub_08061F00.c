// sub_08061F00 at 0x08061F00 (thumb)

undefined4 sub_08061F00(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083620fc)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_08017528(param_1);
    *(undefined2 *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xba) = 0;
  }
  else if (*(char *)(param_1 + 0x10) == '\x03') {
    sub_08017528(param_1);
  }
  else {
    sub_0801749C(param_1);
  }
  sub_0803D3D4(param_1,&DAT_08361f4c,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x8061ced;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = sub_08061C3C(param_1);
    sub_08061C94(param_1,uVar1);
    sub_0800393C(&DAT_085d89b0,(DAT_0202fbbc - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d89bc,(DAT_0202f9bc - 4) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d89c4,(DAT_0202fbbe - 0x300) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d89d0,(DAT_0202f9be - 5) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xc1) = 0x60;
  }
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc2) = 0xff;
  *(undefined *)(param_1 + 0xc3) = 0;
  *(undefined *)(param_1 + 0xc4) = 0;
  sub_08062074(param_1);
  return in_lr;
}

