// sub_08026784 at 0x08026784 (thumb)

undefined4 sub_08026784(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  bool bVar7;
  
  iVar6 = *(int *)(param_1 + 0x20);
  cVar1 = sub_0802732C(param_1,iVar6);
  if ((cVar1 != '\0') || (4 < *(byte *)(iVar6 + 0xd))) {
LAB_080268cc:
    sub_080270CC(param_1);
    return in_lr;
  }
  uVar3 = sub_08027344(param_1,iVar6);
  uVar3 = uVar3 & 0xff;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ab2a4 + uVar3 * 4));
  if (*(char *)(param_1 + 0xc) != '\x01') goto LAB_080268cc;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar6 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar6 + 0x50);
  bVar7 = (bool)(*(byte *)(iVar6 + 10) >> 4 & 1);
  if ((uVar3 == 8) || (uVar3 == 0xc)) {
    if (*(char *)(iVar6 + 0xd) == '\x02') goto LAB_080267f4;
  }
  else if (*(char *)(iVar6 + 0xd) != '\x02') goto LAB_080267f4;
  bVar7 = bVar7 == false;
LAB_080267f4:
  *(bool *)(param_1 + 0x44) = bVar7;
  if (bVar7 == false) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar6 = (int)*(char *)(param_1 + 0x71);
  sub_08025CE8(param_1);
  if ((*(int *)(param_1 + 0xb8) << 8 | (uint)*(byte *)(param_1 + 0x70)) !=
      (uint)*(ushort *)(&DAT_082aa440 + (uint)*(byte *)(param_1 + 0x10) * 2)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    return in_lr;
  }
  iVar5 = (int)*(char *)(param_1 + 0x71);
  if (iVar5 == iVar6) {
    return in_lr;
  }
  iVar5 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x5c));
  if (iVar5 != 0) {
    if (*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x5c)) == 0) {
      uVar4 = sub_08027648(param_1,iVar5);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,uVar4,param_1 + 0x4c,0);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0x8027681;
      return in_lr;
    }
    uVar4 = sub_08027648(param_1,iVar5);
    sub_0800561C(param_1 + 0x74,uVar4);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

