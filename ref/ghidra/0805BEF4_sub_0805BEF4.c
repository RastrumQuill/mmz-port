// sub_0805BEF4 at 0x0805BEF4 (thumb)

undefined4 sub_0805BEF4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar2 = sub_08005458(DAT_02022e98);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 9) = 0x1b;
      *(undefined4 *)(iVar2 + 0x14) = 0x805b855;
      *(undefined2 *)(iVar2 + 0x1c) = DAT_02022ed6;
      *(undefined *)(iVar2 + 0x1e) = DAT_02022f4b;
      *(undefined *)(iVar2 + 0x10) = 4;
      *(int *)(iVar2 + 0x20) = param_1;
    }
    *(int *)(param_1 + 0x24) = iVar2;
    sub_0800561C(param_1 + 0x74,&DAT_082aff8c);
    sub_080033F0(param_1 + 0x6c,0xe);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x0f') {
    sub_08001EAC(0x2c);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

