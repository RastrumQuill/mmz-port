// sub_080254C8 at 0x080254C8 (thumb)

undefined4 sub_080254C8(int param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08025510:
    uVar3 = 0x200;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_08025510;
    uVar3 = 0x280;
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  bVar2 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) >> 3;
  sub_08022BD8(param_1,bVar2 & 1);
  iVar7 = -1;
  if ((bVar2 & 1) != 0) {
    iVar7 = 1;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x182);
  if (99 < uVar4) {
    iVar6 = 0;
    goto LAB_080255e2;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_0802558c:
    iVar6 = 0x200;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_0802558c;
    iVar6 = 0x280;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_080255d4:
    iVar5 = uVar4 << 9;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_080255d4;
    iVar5 = uVar4 * 0x280;
  }
  iVar5 = sub_080EF150(iVar5,100);
  iVar6 = iVar6 - iVar5;
LAB_080255e2:
  uVar3 = sub_0801E7B4(param_1,*(undefined4 *)(param_1 + 0x5c),iVar7 * iVar6,iVar7 << 5,
                       *(undefined2 *)(param_1 + 0xe4));
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  return in_lr;
}

