// sub_0802C5D0 at 0x0802C5D0 (thumb)

/* WARNING: Removing unreachable block (ram,0x0802c670) */

undefined4 sub_0802C5D0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08334148 + (uint)*(byte *)(param_1 + 0x179) * 4));
  if (*(char *)(param_1 + 0x17f) != '7') {
    iVar5 = *(int *)(param_1 + 0xc4);
    goto LAB_0802c720;
  }
  bVar1 = *(byte *)(param_1 + 0x2b9);
  uVar4 = (uint)bVar1;
  if (uVar4 == 0) {
    if (((*(byte *)(param_1 + 0x202) & 4) != 0) || (*(char *)(param_1 + 0x1fc) == '\x05')) {
      uVar2 = DAT_0202ec34;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar2 = DAT_0202ec36;
      }
      if ((uVar2 & 0x8000) == 0) {
        iVar5 = 0x280;
        goto LAB_0802c720;
      }
    }
    iVar5 = 0x200;
    goto LAB_0802c720;
  }
  *(byte *)(param_1 + 0x2b9) = bVar1 - 1;
  if (uVar4 == 0x10) {
    return in_lr;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_0802c664:
    iVar6 = uVar4 * 0x180;
  }
  else {
    uVar2 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar2 = DAT_0202ec36;
    }
    if ((uVar2 & 0x8000) != 0) goto LAB_0802c664;
    iVar6 = uVar4 << 8;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_0802c6b8:
    iVar5 = 0x200;
  }
  else {
    uVar2 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar2 = DAT_0202ec36;
    }
    if ((uVar2 & 0x8000) != 0) goto LAB_0802c6b8;
    iVar5 = 0x280;
  }
  iVar5 = (iVar6 >> 4) + iVar5;
  *(int *)(param_1 + 0xc4) = iVar5;
LAB_0802c720:
  iVar6 = -1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar6 = 1;
  }
  if (*(byte *)(param_1 + 0x182) < 100) {
    iVar3 = sub_080EF150(iVar5 * (uint)*(byte *)(param_1 + 0x182),100);
    iVar5 = iVar5 - iVar3;
  }
  else {
    iVar5 = 0;
  }
  puVar7 = (undefined4 *)(param_1 + 0xd8);
  iVar5 = sub_0801E7B4(param_1,*(undefined4 *)(param_1 + 0x5c),iVar6 * iVar5,iVar6 << 5,
                       *(undefined2 *)(param_1 + 0xe4));
  *(int *)(param_1 + 0x5c) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  uVar4 = sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,puVar7,*puVar7,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,iVar5,1,0,0,1);
  if ((uVar4 & 0x4f) != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  uVar4 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,puVar7,*puVar7,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
  if ((uVar4 & 0xf) == 0) {
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
  return in_lr;
}

