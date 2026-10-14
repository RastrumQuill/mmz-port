// sub_0803CCB4 at 0x0803CCB4 (thumb)

undefined4 sub_0803CCB4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xb4) + 0xd) == '\x01') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(*(int *)(param_1 + 0xb4) + 0xe) != '\x01') {
        if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x6401) {
          sub_0801CF00(param_1,0x6402);
        }
        else {
          sub_0801CF00(param_1,0x6405);
        }
        sub_0801CFF0(param_1);
        sub_08005784(param_1 + 0x74,&DAT_088517e8);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      sub_0801CFF0(param_1);
      sub_08005794(param_1 + 0x74,
                   *(undefined4 *)
                    (*(char *)(param_1 + 0x71) * 4 +
                    *(int *)(&DAT_08851ad4 + (uint)*(byte *)(param_1 + 0x10) * 4)),
                   *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                   *(undefined *)(param_1 + 0xc2),0xffffffff);
      return in_lr;
    }
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar1 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

