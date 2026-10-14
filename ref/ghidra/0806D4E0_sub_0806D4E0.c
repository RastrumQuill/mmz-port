// sub_0806D4E0 at 0x0806D4E0 (thumb)

undefined4 sub_0806D4E0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  undefined auStack_1b [7];
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_080C8D70(auStack_1b + 3,&DAT_080c931f,3);
  if (((*(byte *)(iVar2 + 0xc) < 2) &&
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != -1)) &&
     (iVar2 = sub_08048BE8(param_1), iVar2 == 0)) {
    if ((*(char *)(param_1 + 0xd) == '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_080033F0(param_1 + 0x6c,auStack_1b[*(byte *)(param_1 + 0x10)]);
      if (*(char *)(param_1 + 0x10) == '\x03') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_080055FC(param_1 + 0x74,&DAT_082b0f64,param_1 + 0x4c,8);
        *(int *)(param_1 + 0xb4) = param_1;
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

