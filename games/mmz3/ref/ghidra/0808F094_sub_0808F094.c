// sub_0808F094 at 0x0808F094 (thumb)

undefined4 sub_0808F094(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = DAT_02030108 & 2;
  if ((DAT_02030108 & 2) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_0808f1f2;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar3 = *(int *)(param_1 + 0xb8);
    if ((iVar3 != 0) && (1 < *(byte *)(iVar3 + 0xc))) {
      *(int *)(param_1 + 0xb8) = 0;
    }
    iVar3 = *(int *)(param_1 + 0xbc);
    if ((iVar3 != 0) && (1 < *(byte *)(iVar3 + 0xc))) {
      *(int *)(param_1 + 0xbc) = 0;
    }
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x6000 < uVar2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      goto LAB_0808f1f2;
    }
    goto LAB_0808f180;
  }
  if ((DAT_02030108 & 0x40) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar2;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(char *)(param_1 + 0x94) = (char)uVar2;
    goto LAB_0808f1f2;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (*(int *)(param_1 + 0x28) != 0) {
      if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
        *(uint *)(param_1 + 0x28) = DAT_02030108 & 0x40;
      }
      goto LAB_0808f180;
    }
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar2 < 0x1001) goto LAB_0808f180;
  }
  else {
LAB_0808f180:
    cVar1 = sub_0808EEAC(param_1);
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0808EF88(param_1);
    cVar1 = sub_0808EF0C(param_1);
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365b9c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365bbc + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0x10) != '\x01') {
      return in_lr;
    }
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar2 < 0x6001) {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
LAB_0808f1f2:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

