// sub_0803518C at 0x0803518C (thumb)

undefined4 sub_0803518C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 in_lr;
  
  sub_08035120();
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  uVar2 = bVar1 & 0xc;
  if ((bVar1 & 0xc) == 0) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(char *)(param_1 + 0xd) = (char)uVar2;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = uVar2;
  }
  else {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
  }
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 0;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  return in_lr;
}

