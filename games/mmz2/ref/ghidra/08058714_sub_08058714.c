// sub_08058714 at 0x08058714 (thumb)

undefined4 sub_08058714(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_28 [3];
  
  uVar7 = 0;
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_08058982;
  }
  sub_080032EC(0x8f);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08006E08(param_1 + 0x74,&DAT_0833c7f8);
  cVar1 = *(char *)(param_1 + 0xc4);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0xdb);
    uVar6 = (uint)(cVar1 == '\x06');
    if (cVar1 == '\r') {
      uVar6 = 2;
    }
    if (cVar1 == '\x01') {
      uVar6 = 3;
    }
    if (uVar6 == 2) {
      uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar7 & 0x7fffffff;
      uVar7 = uVar7 * 2 >> 0x11 & 3;
      uVar5 = 0;
      do {
        if (uVar5 != uVar7) {
          sub_08057B90(param_1,uVar5);
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < 4);
    }
  }
  else {
    uVar6 = (uint)(byte)(cVar1 - 1);
    if (uVar6 == 2) {
      uVar7 = (uint)*(byte *)(param_1 + 0xc5);
    }
    *(char *)(param_1 + 0xc4) = '\0';
  }
  *(undefined *)(param_1 + 0xb4) = (&DAT_0833caf0)[uVar6];
  if (uVar6 == 1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd0) + -0x4000;
    local_28[0] = *(int *)(DAT_0202e130 + 0x54);
    local_28[1] = local_28[0] + 0x5800;
    local_28[2] = local_28[0] + -0x5800;
    uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar7 & 0x7fffffff;
    uVar7 = sub_080EF330(uVar7 * 2 >> 0x11,3);
    uVar7 = uVar7 & 0xff;
    iVar3 = local_28[uVar7];
    *(int *)(param_1 + 0x54) = iVar3;
    bVar2 = 0;
    for (iVar3 = iVar3 - *(int *)(param_1 + 0xc0); 0x19fff < iVar3 + 0xd000U;
        iVar3 = iVar3 - *(int *)(param_1 + 0xc0)) {
      uVar7 = sub_080EF330(uVar7 + 1 & 0xff,3);
      uVar7 = uVar7 & 0xff;
      iVar3 = local_28[uVar7];
      *(int *)(param_1 + 0x54) = iVar3;
      bVar2 = bVar2 + 1;
      if (2 < bVar2) break;
    }
    *(char *)(param_1 + 0xb5) = (char)uVar7;
  }
  else if (uVar6 < 2) {
    if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xc0);
      iVar3 = *(int *)(param_1 + 0xd0);
      iVar4 = -0x3000;
LAB_08058964:
      *(int *)(param_1 + 0x58) = iVar3 + iVar4;
    }
  }
  else if (uVar6 == 2) {
    uVar6 = uVar7 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    if (uVar6 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar3 = DAT_0202ed50;
    *(int *)(param_1 + 0x54) = DAT_0202ed50;
    *(int *)(param_1 + 0x54) = iVar3 + *(int *)(&DAT_0833cb50 + uVar7 * 8) * 0x100;
    iVar3 = DAT_0202ed54;
    *(int *)(param_1 + 0x58) = DAT_0202ed54;
    *(int *)(param_1 + 0x58) = iVar3 + *(int *)(&DAT_0833cb54 + uVar7 * 8) * 0x100;
    *(char *)(param_1 + 0xc5) = (char)uVar7;
  }
  else if (uVar6 == 3) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xc0);
    iVar3 = *(int *)(param_1 + 0xd0);
    iVar4 = -0x800;
    goto LAB_08058964;
  }
  sub_08006E08(param_1 + 0x74,&DAT_0833c7f8);
  sub_080127E4(param_1,0xa70a);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08058982:
  if (*(char *)(param_1 + 0x10) == '\x02') {
    sub_08012A14(param_1);
  }
  else {
    sub_080128D4(param_1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xb4);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

