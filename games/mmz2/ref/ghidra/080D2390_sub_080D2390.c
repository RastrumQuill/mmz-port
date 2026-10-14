// sub_080D2390 at 0x080D2390 (thumb)

undefined4 sub_080D2390(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 10) = (char)uVar2;
    uVar3 = 0;
    uVar2 = (uVar2 >> 4 & 1) << 0x1c;
    do {
      local_28 = *(int *)(param_1 + 0x54) + (uVar3 & 3) * 0x1000 + -0x1800;
      local_24 = *(int *)(param_1 + 0x58) + (uVar3 >> 2 & 1) * 0x1000 + -0x1400;
      sub_080B0ACC(&local_28,&DAT_08349c60 + uVar3 * 0x1c,0,uVar2 >> 0x18);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 8);
    local_28 = *(int *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + -0x2000;
    sub_080B0ACC(&local_28,&DAT_08349d40,0,uVar2 >> 0x18);
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) + -0x1800;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = cVar1 - 1U;
  if (((cVar1 - 1U & 7) == 0) && ((byte)(cVar1 - 1U) < 0x21)) {
    if (cVar1 == '\x01') {
      if (DAT_0202ebfc < 9999) {
        DAT_0202ebfc = DAT_0202ebfc + 1;
      }
      sub_0801DE2C(param_1,param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
    else {
      sub_080032EC(0x2a);
      piVar4 = (int *)(param_1 + 0xb4);
      local_28 = *piVar4;
      local_24 = *(int *)(param_1 + 0x58) + -0x1400;
      sub_0801DD2C(5,&local_28);
      *piVar4 = *piVar4 + 0x1000;
    }
  }
  return in_lr;
}

