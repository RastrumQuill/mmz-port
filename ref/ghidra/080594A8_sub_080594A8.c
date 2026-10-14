// sub_080594A8 at 0x080594A8 (thumb)

undefined4 sub_080594A8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14 [2];
  
  local_14[0] = -0x800;
  local_14[1] = 0x800;
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(undefined *)(param_1 + 0x12) = 0x3c;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xffffff00;
    }
    else {
      uVar2 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    sub_0808E574(*(int *)(param_1 + 0x4c) +
                 *(int *)((int)local_14 + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)),
                 *(undefined4 *)(param_1 + 0x50),0);
  }
  if (*(char *)(param_1 + 0x12) == '-') {
    sub_080033F0(param_1 + 0x6c,3);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    sub_0808F394(param_1,param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1,0);
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54) + 3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + -3;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  iVar3 = *(int *)(param_1 + 0x58) + 2;
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    iVar3 = param_1 + 0x4c;
    sub_0808827C(1,iVar3);
    sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
    sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
    sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
    sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
    sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
    sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
    sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),3);
    sub_08001EAC(0xd6);
    sub_08015698(4,iVar3);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,iVar3);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

