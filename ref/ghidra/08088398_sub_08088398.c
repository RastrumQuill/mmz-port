// sub_08088398 at 0x08088398 (thumb)

undefined8 sub_08088398(uint param_1,undefined4 *param_2,undefined2 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = param_4 & 0xffff;
  iVar2 = sub_08005458(DAT_0202300c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0x8088451;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02023010;
    *(undefined *)(iVar2 + 0x1e) = DAT_020230c0;
    *(undefined4 *)(iVar2 + 0x4c) = *param_2;
    *(undefined4 *)(iVar2 + 0x50) = param_2[1];
    sub_08088204(iVar2);
    sub_080033F0(iVar2 + 0x6c,(&DAT_082b3334)[param_1 & 0xff]);
    *(undefined2 *)(iVar2 + 0x48) = param_3;
    *(undefined2 *)(iVar2 + 0x4a) = param_3;
    *(char *)(iVar2 + 0x44) = (char)uVar3;
    if ((param_4 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x45) = (char)(uVar3 >> 8);
    if (uVar3 >> 8 == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x20;
    }
    *(byte *)(iVar2 + 10) = bVar1;
  }
  return CONCAT44(in_lr,iVar2);
}

