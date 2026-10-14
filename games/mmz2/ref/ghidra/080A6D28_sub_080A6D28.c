// sub_080A6D28 at 0x080A6D28 (thumb)

undefined4 sub_080A6D28(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if ((int)((*(byte *)(param_1 + 0xb4) - 0x40) * 0x1000000) < 0) {
    *(undefined *)(param_1 + 0x22) = 0;
    bVar1 = *(byte *)(param_1 + 0x49) & 0xf3;
    bVar3 = 4;
  }
  else {
    *(undefined *)(param_1 + 0x22) = 1;
    bVar1 = *(byte *)(param_1 + 0x49);
    bVar3 = 0xc;
  }
  *(byte *)(param_1 + 0x49) = bVar1 | bVar3;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    iVar2 = sub_080EF150(*(char *)(param_1 + 0xb4) + '\x15',0x2b);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08345266 + iVar2 * 2));
  }
  else {
    iVar2 = sub_080EF150('\x15' - *(char *)(param_1 + 0xb4),0x2b);
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08345266 + iVar2 * 2));
  }
  pbVar4 = (byte *)(param_1 + 0xb4);
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + (short)(&DAT_080ef450)[*pbVar4] * -0x60;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar5 + 0x58) + (short)(&DAT_080ef450)[*pbVar4 + 0x40 & 0xff] * 8;
  *(int *)(param_1 + 0xb8) = (short)(&DAT_080ef450)[*pbVar4 + 0x40 & 0xff] * -0x40;
  return in_lr;
}

