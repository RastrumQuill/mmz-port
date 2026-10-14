// sub_0805D040 at 0x0805D040 (thumb)

undefined4 sub_0805D040(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa916);
    sub_080032EC(0x6f);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + -0x1000;
    uVar3 = sub_080B1D74(&local_20,2,0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08002638(&DAT_0843391c,(DAT_0202e6c6 - 0x300) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433928,(DAT_0202e4c6 - 5) * 0x20 + 0x200);
    sub_080032EC(0xf0);
    break;
  case 1:
    cVar2 = *(char *)(*(int *)(param_1 + 0x28) + 0xf);
    if (cVar2 == '\0') {
      bVar1 = *(byte *)(param_1 + 0x12);
      iVar5 = bVar1 + 1;
      *(char *)(param_1 + 0x12) = (char)iVar5;
      if ((bVar1 & 1) != 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        return in_lr;
      }
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0x1000;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      sub_080BDAE4(&local_18,0,
                   ((uint)(iVar5 * 0x1000000) >> 0x19) * 0x40 + (uVar4 * 2 >> 0x11 & 0x3f) & 0xff);
      return in_lr;
    }
    if (cVar2 == '\x01') {
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(undefined *)(param_1 + 0x13) = 0;
      return in_lr;
    }
    if (cVar2 != '\x02') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08002638(&DAT_08433340,(DAT_0202e630 - 0x200) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_0843334c,(DAT_0202e430 - 4) * 0x20 + 0x200);
    DAT_0202e021 = 1;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
    sub_080127E4(param_1,0x5034);
    sub_080128D4(param_1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    sub_0807CDE4(param_1,0,0);
    uVar3 = sub_0807B28C(param_1,0,0);
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
    uVar3 = sub_0807B28C(param_1,2,0);
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    uVar3 = sub_0807B28C(param_1,1,0);
    *(undefined4 *)(param_1 + 200) = uVar3;
    uVar3 = sub_0807B28C(param_1,3,0);
    *(undefined4 *)(param_1 + 0xd0) = uVar3;
    sub_08002D68(0x81,0x280);
    sub_08002D68(0x82,0x2a0);
    sub_08002D68(0x83,0x120);
    sub_08002EA0(0x81);
    sub_08002EA0(0x82);
    sub_08002EA0(0x83);
    break;
  case 2:
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xbe) = 1;
    *(undefined *)(param_1 + 0x12) = 0x18;
    break;
  case 3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0xff;
    break;
  case 4:
    sub_08002EA0(0x81);
    sub_08002EA0(0x82);
    cVar2 = sub_08002EA0(0x83);
    if (cVar2 != '\x03') {
      return in_lr;
    }
    sub_08002EF0(0x81);
    sub_08002EF0(0x82);
    sub_08002EF0(0x83);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xbe) = 0;
    break;
  case 5:
    bVar1 = (byte)DAT_0202ec42;
    if ((DAT_0202ec42 & 1) == 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(byte *)(param_1 + 0xe) = bVar1 & 1;
    }
  default:
    goto switchD_0805d07c_caseD_6;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0805d07c_caseD_6:
  return in_lr;
}

