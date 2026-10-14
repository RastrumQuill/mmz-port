// sub_0809BCAC at 0x0809BCAC (thumb)

undefined4 sub_0809BCAC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xe900);
  sub_080177F4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  cVar1 = *(char *)(iVar3 + 0xde0 + (uint)*(byte *)(param_1 + 0x10));
  *(char *)(param_1 + 0x12) = cVar1;
  sub_08017BCC(param_1,cVar1 + '\x05');
  *(undefined4 *)(param_1 + 0x54) = 0xd800;
  *(uint *)(param_1 + 0x58) = ((uint)*(byte *)(param_1 + 0x10) * -0x10 + 0x30) * 0x100;
  if (*(char *)(param_1 + 0x10) == '\x03') {
    *(undefined4 *)(param_1 + 0x54) = 0xe800;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x03')) {
    uVar2 = 0xffffff00;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = 0x100;
  sub_0809BD80(param_1);
  return in_lr;
}

