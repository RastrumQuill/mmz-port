// sub_08086568 at 0x08086568 (thumb)

undefined4 sub_08086568(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = (uint)DAT_0202ebbb;
    if ((DAT_0202ebbb & 0x20) == 0) {
      if (*(char *)(param_1 + 0x12) != '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      }
      puVar4 = (uint *)(param_1 + 0xb8);
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        if (*(byte *)(uVar3 + 0xc) < 2) {
          return in_lr;
        }
        if (*(char *)(uVar3 + 0xbc) == '\0') {
          *(undefined *)(param_1 + 0x12) = 0x40;
        }
        *puVar4 = uVar2 & 0x20;
        return in_lr;
      }
      if (*(char *)(param_1 + 0x12) != '\0') {
        return in_lr;
      }
      uVar2 = sub_080863B4(param_1 + 0x54,1,*(undefined *)(param_1 + 0x11));
      *puVar4 = uVar2;
      *(undefined *)(param_1 + 0x12) = 0x40;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    puVar4 = (uint *)(param_1 + 0x8c);
    if ((*puVar4 & 0x200) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      sub_08086794(param_1);
      return in_lr;
    }
    uVar2 = (uint)DAT_0202ebbb;
    uVar3 = uVar2 & 1;
    if ((DAT_0202ebbb & 1) == 0) {
      if ((DAT_0202ebbb & 0x20) != 0) {
        sub_080942F0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *puVar4 = uVar3;
        *(uint *)(param_1 + 0x90) = uVar3;
        *(char *)(param_1 + 0x94) = (char)uVar3;
        goto LAB_0808671e;
      }
      iVar1 = sub_08065A24(param_1);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x2c) == 0) {
          return in_lr;
        }
        *(uint *)(param_1 + 0x2c) = uVar2 & 0x20;
        sub_08006E08(param_1 + 0x74,&DAT_083414d8);
        return in_lr;
      }
      if (((*puVar4 & 1) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
        iVar1 = sub_0801E11C(0,param_1,&DAT_083414d0);
        *(int *)(param_1 + 0x2c) = iVar1;
        if (iVar1 != 0) {
          sub_080127E4(param_1,0x7701);
          sub_08006E08(param_1 + 0x74,&DAT_08341508);
          *(undefined4 *)(param_1 + 0x60) = 0;
          *(undefined *)(param_1 + 0xd) = 1;
        }
      }
      if (*(char *)(param_1 + 0xd) == '\0') {
        sub_080128D4(param_1);
      }
      else {
        sub_08012ACC(param_1);
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar1 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar1;
      if (0x700 < iVar1) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      if ((*(char *)(param_1 + 0x12) == '\0') && (0xff < *(int *)(param_1 + 0x60))) {
        sub_080127E4(param_1,0x7701);
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      }
      if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb4)) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xbc) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar4 = 0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar4 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
LAB_0808671e:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

