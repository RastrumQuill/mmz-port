// sub_08031A48 at 0x08031A48 (thumb)

undefined4 sub_08031A48(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (0x6fe < *(int *)(param_1 + 0x5c) + 0x37fU) {
    if ((*(char *)(param_1 + 0x174) == '\0') && (*(char *)(param_1 + 0x175) != '\x02')) {
      uVar2 = (uint)*(byte *)(param_1 + 0x182);
      if (uVar2 < 100) {
        if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08031b5c:
          iVar4 = 0x200;
        }
        else {
          uVar1 = DAT_0202ec34;
          if (*(char *)(param_1 + 0x10) != '\0') {
            uVar1 = DAT_0202ec36;
          }
          if ((uVar1 & 0x8000) != 0) goto LAB_08031b5c;
          iVar4 = 0x280;
        }
        if (((*(byte *)(param_1 + 0x202) & 4) != 0) || (*(char *)(param_1 + 0x1fc) == '\x05')) {
          uVar1 = DAT_0202ec34;
          if (*(char *)(param_1 + 0x10) != '\0') {
            uVar1 = DAT_0202ec36;
          }
          if ((uVar1 & 0x8000) != 0) goto LAB_08031ba4;
          iVar3 = uVar2 * 0x280;
          goto LAB_08031ba6;
        }
        goto LAB_08031ba4;
      }
    }
    else if (*(byte *)(param_1 + 0x182) < 100) {
      iVar4 = sub_080EF150((uint)*(byte *)(param_1 + 0x182) * 0x380,100);
      iVar4 = 0x380 - iVar4;
      goto LAB_08031bd4;
    }
LAB_08031bd2:
    iVar4 = 0;
    goto LAB_08031bd4;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x182);
  if (99 < uVar2) goto LAB_08031bd2;
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08031ab0:
    iVar4 = 0x200;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_08031ab0;
    iVar4 = 0x280;
  }
  if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08031ba4:
    iVar3 = uVar2 << 9;
  }
  else {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_08031ba4;
    iVar3 = uVar2 * 0x280;
  }
LAB_08031ba6:
  iVar3 = sub_080EF150(iVar3,100);
  iVar4 = iVar4 - iVar3;
LAB_08031bd4:
  *(int *)(param_1 + 0xc4) = iVar4;
  return in_lr;
}

