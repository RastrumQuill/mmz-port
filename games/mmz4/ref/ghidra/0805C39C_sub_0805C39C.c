// sub_0805C39C at 0x0805C39C (thumb)

undefined4 sub_0805C39C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_2c [3];
  undefined auStack_20 [4];
  
  local_2c[0] = 0x80;
  local_2c[1] = 0x80;
  local_2c[2] = 0x80;
  sub_08128B5C(auStack_20,&DAT_08129020,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar4 = *(byte *)(param_1 + 0x11) + 1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = auStack_20[bVar1];
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb8) = 0xff;
  *(undefined *)(param_1 + 0xb9) = 0xff;
  *(undefined *)(param_1 + 0xba) = 0;
  *(short *)(param_1 + 0xca) = (short)local_2c[bVar1];
  *(undefined4 *)(param_1 + 0xcc) = 0;
  uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_08001D30(&DAT_08c44654,(DAT_0202e0e2 - 0x32c) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44660,(DAT_0202dee2 - 5) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x25) = 0x18;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  if (uVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_08050408(param_1,&DAT_088555d8,(int)*(short *)(local_2c + bVar1));
  sub_0805C4EC(param_1);
  return in_lr;
}

