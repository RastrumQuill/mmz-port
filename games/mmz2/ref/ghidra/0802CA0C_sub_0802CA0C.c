// sub_0802CA0C at 0x0802CA0C (thumb)

undefined4 sub_0802CA0C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08334154 + (uint)*(byte *)(param_1 + 0x179) * 4));
  bVar1 = *(byte *)(param_1 + 0x2b9);
  uVar5 = (uint)bVar1;
  if (uVar5 == 0) {
    if (((*(byte *)(param_1 + 0x202) & 4) != 0) || (*(char *)(param_1 + 0x1fc) == '\x05')) {
      uVar2 = DAT_0202ec34;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar2 = DAT_0202ec36;
      }
      if ((uVar2 & 0x8000) == 0) {
        iVar6 = 0x280;
        goto LAB_0802cb42;
      }
    }
    iVar6 = 0x200;
    goto LAB_0802cb42;
  }
  *(byte *)(param_1 + 0x2b9) = bVar1 - 1;
  if (uVar5 == 0x18) {
    return in_lr;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_0802ca8c:
    iVar6 = uVar5 * 0x180;
  }
  else {
    uVar2 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar2 = DAT_0202ec36;
    }
    if ((uVar2 & 0x8000) != 0) goto LAB_0802ca8c;
    iVar6 = uVar5 << 8;
  }
  iVar6 = sub_080EF150(iVar6,0x18);
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_0802cae0:
    iVar3 = 0x200;
  }
  else {
    uVar2 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar2 = DAT_0202ec36;
    }
    if ((uVar2 & 0x8000) != 0) goto LAB_0802cae0;
    iVar3 = 0x280;
  }
  iVar6 = iVar6 + iVar3;
  *(int *)(param_1 + 0xc4) = iVar6;
LAB_0802cb42:
  iVar3 = -1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = 1;
  }
  if (*(byte *)(param_1 + 0x182) < 100) {
    iVar4 = sub_080EF150(iVar6 * (uint)*(byte *)(param_1 + 0x182),100);
    iVar6 = iVar6 - iVar4;
  }
  else {
    iVar6 = 0;
  }
  puVar7 = (undefined4 *)(param_1 + 0xd8);
  iVar6 = sub_0801E7B4(param_1,*(undefined4 *)(param_1 + 0x5c),iVar3 * iVar6,iVar3 << 5,
                       *(undefined2 *)(param_1 + 0xe4));
  *(int *)(param_1 + 0x5c) = iVar6;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
  uVar5 = sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,puVar7,*puVar7,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,iVar6,1,0,0,1);
  if ((uVar5 & 0x4f) != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  uVar5 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,puVar7,*puVar7,*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
  if ((uVar5 & 0xf) == 0) {
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

