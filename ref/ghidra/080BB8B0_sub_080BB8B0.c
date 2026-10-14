// sub_080BB8B0 at 0x080BB8B0 (thumb)

undefined4 sub_080BB8B0(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined4 in_lr;
  
  cVar1 = sub_080BB9CC();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
    sub_080BB958(param_1);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12);
    iVar2 = sub_080BBA68(param_1);
    if (iVar2 * 0x10000 < 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else {
      cVar3 = *(char *)(param_1 + 0x13);
      if (*(char *)(param_1 + 0x12) != cVar1) {
        cVar3 = '\0';
      }
      bVar4 = cVar3 + 0x1fU & 0x1f;
      *(byte *)(param_1 + 0x13) = bVar4;
      if (bVar4 < 8) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_080BBC28(param_1);
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      }
    }
  }
  return in_lr;
}

