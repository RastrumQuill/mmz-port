// sub_08046404 at 0x08046404 (thumb)

undefined4 sub_08046404(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(iVar4 + 0x11) = 0;
    uVar3 = sub_08001EAC(0x16);
    *(undefined2 *)(param_1 + 0xd2) = uVar3;
    *(undefined2 *)(param_1 + 0xd0) = 0xc0;
  }
  sub_080297C0(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      sub_0808678C(param_1,3,0,(int)((uint)*(byte *)(param_1 + 0x12) * 0x40000 + 0xa30000) >> 0x10);
    }
    else {
      sub_0808678C(param_1,3,1,(uint)*(byte *)(param_1 + 0x12) * -4 + 0x13c);
    }
  }
  if (0x24 < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 9;
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      uVar2 = 0x60;
    }
    else if (*(short *)(param_1 + 0x8c) < 0x30) {
      uVar2 = 0x68;
    }
    else {
      uVar2 = 0x70;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
  }
  return in_lr;
}

