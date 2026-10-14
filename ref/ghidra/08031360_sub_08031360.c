// sub_08031360 at 0x08031360 (thumb)

undefined4 sub_08031360(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
    DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  pcVar3 = (char *)(param_1 + 0xca);
  *pcVar3 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  sub_08029778(param_1,4);
  sub_080297C0(param_1);
  *(char *)(param_1 + 0x44) = *pcVar3;
  if (*pcVar3 == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x1000) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

