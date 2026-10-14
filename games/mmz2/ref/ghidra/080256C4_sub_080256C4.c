// sub_080256C4 at 0x080256C4 (thumb)

undefined4 sub_080256C4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar5 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  if ((bVar5 & 0xc) == 0) {
    bVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  }
  else {
    bVar5 = bVar5 >> 3 & 1;
    sub_08022BD8(param_1,bVar5);
  }
  iVar1 = sub_08031830(param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else {
    iVar1 = *(byte *)(param_1 + 0x184) - 1;
    *(byte *)(param_1 + 0x184) = (byte)iVar1;
    iVar6 = -1;
    if (bVar5 != 0) {
      iVar6 = 1;
    }
    if (*(byte *)(param_1 + 0x182) < 100) {
      iVar2 = sub_080EF150((uint)*(byte *)(param_1 + 0x182) * 0x380,100);
      iVar2 = 0x380 - iVar2;
    }
    else {
      iVar2 = 0;
    }
    iVar6 = sub_0801E7B4(param_1,*(undefined4 *)(param_1 + 0x5c),iVar6 * iVar2,iVar6 << 5,
                         *(undefined2 *)(param_1 + 0xe4));
    *(int *)(param_1 + 0x5c) = iVar6;
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
      uVar3 = sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                           *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                           *(byte *)(param_1 + 10) >> 4 & 1,iVar6,1,0,0,1);
      if ((uVar3 & 0x4f) != 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
  }
  uVar3 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                       *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
  if ((uVar3 & 0xf) == 0) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_08025A54(param_1);
  }
  else if (iVar1 == 0) {
    bVar5 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
    uVar4 = bVar5 & 0xc;
    if ((bVar5 & 0xc) == 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(char *)(param_1 + 0xd) = (char)uVar4;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = uVar4;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
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
    }
  }
  return in_lr;
}

