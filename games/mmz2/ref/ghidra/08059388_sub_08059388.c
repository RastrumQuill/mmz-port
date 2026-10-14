// sub_08059388 at 0x08059388 (thumb)

undefined4 sub_08059388(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x02') &&
     ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc) ||
      (*(short *)(*(int *)(param_1 + 0x28) + 0xc) == 0x1701)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 == 1) {
LAB_08059448:
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833cbf4 + (uint)*(byte *)(param_1 + 0x12) * 2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805945e:
    *(char *)(param_1 + 199) = *(char *)(param_1 + 199) + '\x01';
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_08012A14(param_1);
    }
    else {
      sub_080128D4(param_1);
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x12) + '\x01';
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\x03') {
        if (*(char *)(param_1 + 0x10) == '\x02') {
          sub_080A1028(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,
                       *(byte *)(param_1 + 10) >> 4 & 1,
                       (&DAT_0833cbfc)[1 < *(byte *)(param_1 + 0xc5)]);
        }
        else {
          sub_080032EC(0x104);
          sub_080A1028(param_1,param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,
                       (&DAT_0833cbfc)[1 < *(byte *)(param_1 + 0xc5)]);
        }
        *(undefined *)(param_1 + 0x13) = 0x26;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x10) != '\x02') {
          sub_080032EC(0x8f);
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0xc4) = 4;
          bVar2 = *(byte *)(param_1 + 10) | 1;
          goto LAB_080595d6;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      }
      else {
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (*(char *)(param_1 + 0x10) == '\x02') {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      else {
        sub_08006E08(param_1 + 0x74,&DAT_0833c948);
      }
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0xc6) = 0;
      *(undefined *)(param_1 + 199) = *(undefined *)(param_1 + 0xc5);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08059448;
    }
  }
  else {
    if (bVar2 == 2) goto LAB_0805945e;
    if (bVar2 == 3) {
      *(char *)(param_1 + 199) = *(char *)(param_1 + 199) + '\x01';
      cVar1 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xe) = 1;
      }
      if (*(char *)(param_1 + 0x10) == '\x02') {
        sub_08012A14(param_1);
      }
      else {
        sub_080128D4(param_1);
      }
    }
  }
  if ((*(byte *)(param_1 + 199) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (5 < (int)((uint)*(byte *)(param_1 + 199) - (uint)*(byte *)(param_1 + 0xc5))) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\x02') {
    return in_lr;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080595d6:
  *(byte *)(param_1 + 10) = bVar2;
  return in_lr;
}

