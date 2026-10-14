// sub_0808FCCC at 0x0808FCCC (thumb)

undefined4 sub_0808FCCC(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808FE44(param_1);
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == -1) {
    sub_080032EC(0x2c);
    sub_080A9494(param_1,0,0);
    *(undefined *)(param_1 + 0x13) = 0x5c;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
  case 4:
    iVar2 = *(int *)(param_1 + 0x58) +
            (int)*(short *)(&DAT_08342228 + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(int *)(param_1 + 0x58) = iVar2;
    iVar4 = *(int *)(param_1 + 0xb8) + 0x12000;
    if (iVar2 < iVar4) {
      return in_lr;
    }
    break;
  case 1:
  case 3:
  case 5:
    iVar2 = *(int *)(param_1 + 0x54) -
            (int)*(short *)(&DAT_08342228 + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(int *)(param_1 + 0x54) = iVar2;
    iVar4 = *(int *)(param_1 + 0xb4) + (uint)*(byte *)(param_1 + 0x12) * -0x100;
    if (iVar4 < iVar2) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x18';
    goto LAB_0808fdf0;
  case 2:
    iVar2 = *(int *)(param_1 + 0x58) -
            (int)*(short *)(&DAT_08342228 + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(int *)(param_1 + 0x58) = iVar2;
    iVar4 = *(int *)(param_1 + 0xb8) + 0x2000;
    if (iVar4 < iVar2) {
      return in_lr;
    }
    break;
  case 6:
    iVar2 = *(int *)(param_1 + 0x58) -
            (int)*(short *)(&DAT_08342228 + (uint)*(byte *)(param_1 + 0x10) * 2);
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 <= *(int *)(param_1 + 0xb8)) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      pcVar3 = (char *)(iVar4 + 0xbd);
      *pcVar3 = *pcVar3 + -1;
    }
  default:
    goto switchD_0808fd50_caseD_7;
  }
  *(int *)(param_1 + 0x58) = iVar4;
LAB_0808fdf0:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0808fd50_caseD_7:
  return in_lr;
}

