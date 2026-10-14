// sub_080303B4 at 0x080303B4 (thumb)

undefined4 sub_080303B4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x143) != '\0') {
    uVar2 = 7;
    goto LAB_08030576;
  }
  if (*(short *)(param_1 + 0xe) == 0x302) {
    return in_lr;
  }
  puVar5 = (uint *)(param_1 + 600);
  if ((*puVar5 & 1) != 0) {
    if (*(byte *)(param_1 + 0xf) < 4) {
      uVar4 = sub_0802C79C(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,0);
      if ((uVar4 & 0xff) == 0) {
        if (((*(char *)(param_1 + 0xc6) == '\x16') && ((*(ushort *)(param_1 + 0x252) & 0x8000) == 0)
            ) && ((*(byte *)(param_1 + 0x142) & 8) != 0)) {
          *(undefined *)(param_1 + 0xd) = 1;
          *(undefined *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0xf) = 0;
          goto LAB_080304ee;
        }
        goto LAB_0803049c;
      }
      if (*(int *)(param_1 + 0x108) != 0) {
        *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
        *(undefined4 *)(param_1 + 0x108) = 0;
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
      uVar2 = 3;
LAB_080304ec:
      *(undefined *)(param_1 + 0xf) = uVar2;
LAB_080304ee:
      sub_080383FC(param_1);
      return in_lr;
    }
LAB_0803049c:
    if ((((*(char *)(param_1 + 0xe) == '\x01') && (*(byte *)(param_1 + 0xf) < 5)) ||
        ((*(char *)(param_1 + 0xe) == '\x02' && (*(byte *)(param_1 + 0xf) < 2)))) &&
       (((*(ushort *)(param_1 + 0x252) & 0x8000) == 0 && (*(char *)(param_1 + 0xc6) == '\x15')))) {
      bVar1 = *(byte *)(param_1 + 0x142);
      if ((bVar1 & 2) == 0) {
        *(byte *)(param_1 + 0x142) = bVar1 | 2;
        uVar2 = 1;
        *(undefined *)(param_1 + 0xd) = 1;
        *(byte *)(param_1 + 0xe) = bVar1 & 2;
        goto LAB_080304ec;
      }
    }
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    if (((*(byte *)(param_1 + 0xf) < 5) && (*(byte *)(param_1 + 0xf) != 2)) && ((*puVar5 & 2) == 0))
    {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  }
  else if ((*(char *)(param_1 + 0xe) == '\x02') &&
          (cVar3 = sub_0802C5E0(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,0),
          cVar3 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') && (3 < *(byte *)(param_1 + 0xf))) {
    return in_lr;
  }
  if ((*puVar5 & 0x40) == 0) {
    return in_lr;
  }
  cVar3 = sub_0802CA4C(param_1,0);
  if (cVar3 == '\0') {
    return in_lr;
  }
  uVar2 = 3;
LAB_08030576:
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

