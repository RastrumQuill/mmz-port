// sub_080589EC at 0x080589EC (thumb)

undefined4 sub_080589EC(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  short *psVar4;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_08058a3a;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08006E08(param_1 + 0x74,&DAT_0833c828);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0833cb70 + (uint)*(byte *)(param_1 + 0x12) * 2));
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08058a3a:
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 1) {
    if ((*(char *)(param_1 + 0x71) == '\a') && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      uVar3 = 0;
      psVar4 = &DAT_0833cb94;
      do {
        local_20 = *(int *)(param_1 + 0x54) + *psVar4 * 0x100;
        local_1c = *(int *)(param_1 + 0x58) + psVar4[1] * 0x100;
        sub_080A0EDC(param_1,&local_20,(&DAT_0833cbca)[uVar3],uVar3 & 0xff);
        psVar4 = psVar4 + 2;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 6);
    }
  }
  else if (bVar1 < 2) {
    if (((bVar1 == 0) && (*(char *)(param_1 + 0x71) == '\x06')) &&
       (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      uVar3 = 0;
      psVar4 = &DAT_0833cb7c;
      do {
        local_20 = *(int *)(param_1 + 0x54) + *psVar4 * 0x100;
        local_1c = *(int *)(param_1 + 0x58) + psVar4[1] * 0x100;
        sub_080A0EDC(param_1,&local_20,(&DAT_0833cbc4)[uVar3],uVar3 & 0xff);
        psVar4 = psVar4 + 2;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 6);
    }
  }
  else if (((bVar1 == 3) && (*(char *)(param_1 + 0x71) == '\x06')) &&
          (*(char *)(param_1 + 0x13) == '\0')) {
    *(undefined *)(param_1 + 0x13) = 1;
    uVar3 = 0;
    psVar4 = &DAT_0833cbac;
    do {
      local_20 = *(int *)(param_1 + 0x54) + *psVar4 * 0x100;
      local_1c = *(int *)(param_1 + 0x58) + psVar4[1] * 0x100;
      sub_080A0EDC(param_1,&local_20,(&DAT_0833cbd0)[uVar3],uVar3 & 0xff);
      psVar4 = psVar4 + 2;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 6);
  }
  if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
    cVar2 = *(char *)(param_1 + 0x12);
    if ((cVar2 == '\0') && (*(int *)(param_1 + 100) < 0x1e)) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    }
    else {
      *(char *)(param_1 + 0x12) = cVar2 + '\x01';
      if (cVar2 == '\x05') {
        *(undefined *)(param_1 + 0xd) = 5;
      }
      *(bool *)(param_1 + 0xe) = cVar2 != '\x05';
    }
  }
  return in_lr;
}

