// sub_0808CB6C at 0x0808CB6C (thumb)

undefined4 sub_0808CB6C(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = (uint)(0 < *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54));
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar4 * -0x100;
    sub_08017700(param_1,0x7202);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_18 = uVar4 * -0x100 + 0x80;
    local_14 = 0x60;
    if (*(char *)(param_1 + 0xb8) == '\0') {
      sub_080B80C8(param_1,param_1 + 0x54,&local_18,0x20,&DAT_083658f8,0x18,0x19);
    }
    else {
      sub_080B7FC0(param_1,param_1 + 0x54,&local_18,0x20,&DAT_083658f8,0x18);
    }
    *(int *)(param_1 + 0x5c) = local_18 / 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60) + 0x15;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar2 != 0)) {
    sub_0808CAD4(param_1);
  }
  return in_lr;
}

