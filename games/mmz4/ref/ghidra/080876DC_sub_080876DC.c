// sub_080876DC at 0x080876DC (thumb)

undefined4 sub_080876DC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 in_lr;
  undefined4 local_14;
  uint local_10;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 0) {
    sub_08002B10(0x137);
    local_14 = 0x800;
    local_10 = (uint)bVar1;
    sub_08088E68(param_1 + 0x54,&local_14,0,2);
    sub_08005784(param_1 + 0x74,&DAT_0885bac8);
    sub_0801CF00(param_1,0x1d06);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar2 = *(char *)(param_1 + 0xb4) + -1;
    *(char *)(param_1 + 0xb4) = cVar2;
    if (cVar2 == '\0') {
      uVar3 = 4;
    }
    else {
      uVar3 = 1;
    }
    *(undefined *)(param_1 + 0xe) = uVar3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

