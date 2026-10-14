// sub_0805EB60 at 0x0805EB60 (thumb)

undefined4 sub_0805EB60(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_0805ec76;
  }
  bVar1 = *(byte *)(param_1 + 0xc2);
  if (bVar1 == 2) {
    iVar4 = *(int *)(param_1 + 0x50);
    iVar2 = iVar4 + -0x1800;
    *(int *)(param_1 + 0x50) = iVar2;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      iVar2 = 0x1800;
LAB_0805ebc8:
      iVar2 = iVar4 + iVar2;
    }
LAB_0805ebca:
    *(int *)(param_1 + 0x50) = iVar2;
  }
  else if (bVar1 < 3) {
    if (bVar1 == 1) {
      iVar4 = *(int *)(param_1 + 0x50);
      iVar2 = iVar4 + -0x1200;
      *(int *)(param_1 + 0x50) = iVar2;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        iVar2 = 0x1200;
        goto LAB_0805ebc8;
      }
      goto LAB_0805ebca;
    }
  }
  else {
    if (bVar1 == 3) {
      iVar4 = *(int *)(param_1 + 0x50);
      iVar2 = iVar4 + -0x2300;
      *(int *)(param_1 + 0x50) = iVar2;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        iVar2 = iVar4 + 0x2300;
      }
      *(int *)(param_1 + 0x50) = iVar2;
      uVar3 = (((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1d ^ 1) & 1;
      *(char *)(param_1 + 0x45) = (char)uVar3;
      if (uVar3 == 0) {
LAB_0805ec4c:
        bVar1 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x20;
      }
    }
    else {
      if (bVar1 != 4) goto LAB_0805ec54;
      iVar4 = *(int *)(param_1 + 0x50);
      iVar2 = iVar4 + -0x2b00;
      *(int *)(param_1 + 0x50) = iVar2;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        iVar2 = iVar4 + 0x2b00;
      }
      *(int *)(param_1 + 0x50) = iVar2;
      uVar3 = (((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1d ^ 1) & 1;
      *(char *)(param_1 + 0x45) = (char)uVar3;
      if (uVar3 == 0) goto LAB_0805ec4c;
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
LAB_0805ec54:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805ec76:
  local_14 = *(undefined4 *)(param_1 + 0x4c);
  local_10 = *(int *)(param_1 + 0x50) + -0x800;
  sub_0808827C(1,&local_14);
  sub_08090B38(param_1,&local_14);
  sub_08001EAC(2);
  sub_08015698(1,param_1 + 0x4c);
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

