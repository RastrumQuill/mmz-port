// sub_0802A040 at 0x0802A040 (thumb)

undefined4 sub_0802A040(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x119) != '\0') {
    uVar2 = 5;
    goto LAB_0802a174;
  }
  if (*(short *)(param_1 + 0xe) == 0x202) {
    return in_lr;
  }
  puVar5 = (uint *)(param_1 + 0x218);
  if (((*puVar5 & 1) != 0) && (*(byte *)(param_1 + 0xf) < 3)) {
    uVar4 = sub_08026AF8(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,0);
    if ((uVar4 & 0xff) == 0) {
      if (((*(char *)(param_1 + 0xc5) == '\x01') || (*(char *)(param_1 + 0xc5) == '\a')) &&
         (*(char *)(param_1 + 0x11c) != '\0')) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(char *)(param_1 + 0xe) = (char)uVar4;
        *(char *)(param_1 + 0xf) = (char)uVar4;
        goto LAB_0802a146;
      }
      if ((((*(ushort *)(param_1 + 0x216) & 0x8000) != 0) ||
          ((*(char *)(param_1 + 0xc5) != '\x02' && (*(char *)(param_1 + 0xc5) != '\a')))) ||
         (*(char *)(param_1 + 0x11a) != '\0')) goto LAB_0802a154;
      uVar2 = 1;
      *(char *)(param_1 + 0x11a) = '\x01';
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      if (*(int *)(param_1 + 0xf4) != 0) {
        *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
        *(undefined4 *)(param_1 + 0xf4) = 0;
      }
      uVar4 = (uVar4 & 0xff) - 1 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      if (uVar4 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      uVar2 = 2;
    }
    *(undefined *)(param_1 + 0xf) = uVar2;
LAB_0802a146:
    sub_0803298C(param_1);
    return in_lr;
  }
LAB_0802a154:
  if (((*puVar5 & 0x40) == 0) || (cVar3 = sub_08026D90(param_1,&DAT_0835b034,0), cVar3 == '\0')) {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      if (*(char *)(param_1 + 0xe) != '\x02') {
        return in_lr;
      }
      cVar3 = sub_08026978(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,0);
      if (cVar3 == '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if ((byte)(*(char *)(param_1 + 0xf) - 3U) < 2) {
      return in_lr;
    }
    if ((*puVar5 & 2) != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  uVar2 = 3;
LAB_0802a174:
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

