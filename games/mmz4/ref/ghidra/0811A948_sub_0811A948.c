// sub_0811A948 at 0x0811A948 (thumb)

undefined4 sub_0811A948(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar4 = 0;
  do {
    *(undefined *)(param_1 + 0xdd4 + uVar4) = 0xff;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 6);
  *(undefined *)(param_1 + 0xddc) = 0;
  *(undefined *)(param_1 + 0xddd) = 0;
  *(undefined *)(param_1 + 0xdda) = 0;
  cVar1 = *(char *)(param_1 + 0xddb);
  if (cVar1 != '\0') {
    bVar3 = cVar1 - 1;
    *(undefined *)(param_1 + 0xddc) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xdd4) = 0xff;
    *(undefined *)(param_1 + 0xdda) = 1;
    bVar3 = *(byte *)(param_1 + 0xddb);
  }
  iVar2 = DAT_0202edac;
  uVar6 = (uint)(cVar1 == '\0');
  uVar5 = 10;
  uVar4 = uVar6;
  do {
    if (((int)(uint)*(byte *)((uVar5 >> 2) + iVar2) >> (uVar5 & 3) + 4 & 1U) != 0) {
      if (uVar4 == bVar3 + uVar6) {
        *(char *)(param_1 + 0xdd4 + uVar6) = (char)uVar5;
        *(char *)(param_1 + 0xdda) = *(char *)(param_1 + 0xdda) + '\x01';
        if (uVar6 < 5) {
          uVar6 = uVar6 + 1 & 0xff;
        }
      }
      else if (uVar6 == 5) {
        *(undefined *)(param_1 + 0xddd) = 1;
        return in_lr;
      }
      uVar4 = uVar4 + 1 & 0xff;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x14);
  return in_lr;
}

