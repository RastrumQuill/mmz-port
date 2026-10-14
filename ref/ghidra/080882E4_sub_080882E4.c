// sub_080882E4 at 0x080882E4 (thumb)

undefined8 sub_080882E4(uint param_1,undefined4 *param_2,char param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_0202300c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0x8088451;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02023010;
    *(undefined *)(iVar2 + 0x1e) = DAT_020230c0;
    *(undefined4 *)(iVar2 + 0x4c) = *param_2;
    *(undefined4 *)(iVar2 + 0x50) = param_2[1];
    sub_08088120(iVar2);
    sub_080033F0(iVar2 + 0x6c,(&DAT_082b3334)[param_1 & 0xff]);
    *(char *)(iVar2 + 0x44) = param_3;
    if (param_3 == '\0') {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x45) = param_4;
    if (param_4 == '\0') {
      bVar1 = *(byte *)(iVar2 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x20;
    }
    *(byte *)(iVar2 + 10) = bVar1;
  }
  return CONCAT44(in_lr,iVar2);
}

