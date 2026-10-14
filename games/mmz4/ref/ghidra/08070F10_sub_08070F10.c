// sub_08070F10 at 0x08070F10 (thumb)

undefined4 sub_08070F10(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  undefined auStack_14 [8];
  
  sub_08128B5C(auStack_14,&DAT_0812924f,5);
  *(undefined *)(*(int *)(param_1 + 0xb4) + 0xb4) = 1;
  uVar1 = sub_08073D1C(param_1);
  *(undefined *)(param_1 + 0xc3) = uVar1;
  cVar2 = sub_08073D4C(auStack_14,5);
  *(char *)(param_1 + 0xc2) = cVar2 + '\x01';
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

