// sub_0809BD80 at 0x0809BD80 (thumb)

undefined4 sub_0809BD80(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((*(short *)(DAT_020305e8 + 10) < (short)(ushort)*(byte *)(iVar2 + 0xe0f)) ||
       (*(char *)(iVar2 + 0xe12) != '\0')) goto LAB_0809be0e;
    *(undefined *)(param_1 + 0x12) = *(undefined *)(iVar2 + 0xde0 + (uint)*(byte *)(param_1 + 0x10))
    ;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_0809be0e;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 < *(int *)(param_1 + 0xb8) + 0x1000) goto LAB_0809be0e;
    sub_08017BCC(param_1,*(char *)(param_1 + 0x12) + '\x05');
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar1;
LAB_0809be0e:
  sub_080177F4(param_1);
  return in_lr;
}

