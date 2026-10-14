// sub_08025940 at 0x08025940 (thumb)

undefined4 sub_08025940(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08031830();
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
    uVar3 = bVar1 & 0xc;
    if ((bVar1 & 0xc) == 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(char *)(param_1 + 0xd) = (char)uVar3;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = uVar3;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      sub_0802509C(param_1);
    }
    else {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      sub_08025258(param_1);
    }
  }
  return in_lr;
}

