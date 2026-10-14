// sub_0808FA8C at 0x0808FA8C (thumb)

undefined4 sub_0808FA8C(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  if ((*(char *)(param_1 + 0x10) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == -1) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08006DE4(param_1 + 0x74,&DAT_083421b4,param_1 + 0x54,4);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        uVar2 = sub_080032EC(0xce);
        *(undefined2 *)(param_1 + 0xc0) = uVar2;
        *(undefined *)(param_1 + 0x10) = 1;
        *(undefined *)(param_1 + 0xf) = 1;
      }
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      iVar3 = *(int *)(param_1 + 0x54) + -0x300;
      *(int *)(param_1 + 0x54) = iVar3;
      iVar4 = *(int *)(param_1 + 0xb4) + 0x2000;
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x54) = iVar4;
        *(undefined *)(param_1 + 0xf) = 2;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58) + -0x300;
      *(int *)(param_1 + 0x58) = iVar3;
      if (iVar3 < *(int *)(param_1 + 0xb8) + -0x800) {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808F85C(param_1);
  }
  return in_lr;
}

