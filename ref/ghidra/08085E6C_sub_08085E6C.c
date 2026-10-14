// sub_08085E6C at 0x08085E6C (thumb)

undefined4 sub_08085E6C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b2f28);
    sub_080033F0(param_1 + 0x6c,2);
    *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0xb8);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((((iVar2 != 0) && (*(char *)(iVar2 + 8) == '\x04')) && (*(char *)(iVar2 + 0xd) == '\x05')) &&
     (*(char *)(iVar2 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(char *)(param_1 + 0x1f) = *(char *)(param_1 + 0x12) + *(char *)(param_1 + 0x13) + '@';
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

