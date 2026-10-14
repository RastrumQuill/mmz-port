// sub_08083D0C at 0x08083D0C (thumb)

undefined4 sub_08083D0C(int param_1)

{
  short sVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0x1200;
  sub_080D0894(2,&local_1c);
  sVar1 = sub_08007C7C(local_1c,local_18);
  if (sVar1 == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      sub_080D4898(&local_1c,&DAT_0885b4e0,0,*(byte *)(param_1 + 10) & 0x10);
      uVar3 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar3 = 0x11;
      }
      sub_080D4898(&local_1c,&DAT_0885b4e0,0,uVar3);
      sub_080D4898(&local_1c,&DAT_0885b4fc,0,*(byte *)(param_1 + 10) & 0x10);
      uVar3 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar3 = 0x11;
      }
      sub_080D4898(&local_1c,&DAT_0885b4fc,0,uVar3);
    }
    else {
      bVar2 = *(byte *)(param_1 + 0xbc);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar2 = bVar2 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_0885b4e0,0,bVar2);
      bVar2 = *(byte *)(param_1 + 0xbc);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar2 = bVar2 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_0885b4e0,0,bVar2);
      bVar2 = *(byte *)(param_1 + 0xbc);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar2 = bVar2 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_0885b4fc,0,bVar2);
      bVar2 = *(byte *)(param_1 + 0xbc);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar2 = bVar2 | 0x10;
      }
      sub_080D4898(&local_1c,&DAT_0885b4fc,0,bVar2);
    }
  }
  sub_08002B10(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

