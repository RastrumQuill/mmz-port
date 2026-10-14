// sub_080692C4 at 0x080692C4 (thumb)

undefined4 sub_080692C4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xb8);
  iVar4 = *(int *)(param_1 + 0xbc);
  iVar3 = *(int *)(param_1 + 0xc0);
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar2 = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = uVar2;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfe;
    sub_0801CF00(uVar1,0x5700);
    sub_0801CF00(iVar5,0x5703);
    sub_0801CF00(iVar4,0x5707);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(uVar1);
  sub_0801CFF0(iVar5);
  sub_0801CFF0(iVar4);
  if ((*(char *)(iVar5 + 0x73) == '\x03') && (*(char *)(iVar4 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

