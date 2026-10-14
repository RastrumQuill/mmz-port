// sub_08074CC4 at 0x08074CC4 (thumb)

undefined4 sub_08074CC4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0xf;
    sub_08007390(param_1 + 0x74,&DAT_08363724);
    sub_08017700(param_1,0x280b);
    uVar2 = sub_080BB2FC(param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x18;
    sub_0800471C(0x3b);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  iVar1 = DAT_0202f5c0;
  iVar4 = *(int *)(DAT_0202f5c0 + 0x54);
  *(int *)(param_1 + 0x54) = iVar4 + 0x800;
  iVar3 = iVar4 + 0x7f0;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = iVar4 + -0x800;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + -0x800;
  sub_080177F4(param_1);
  return in_lr;
}

