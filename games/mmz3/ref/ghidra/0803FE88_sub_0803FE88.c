// sub_0803FE88 at 0x0803FE88 (thumb)

undefined4 sub_0803FE88(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      *(char *)(param_1 + 0xd0) = '\0';
      *(undefined4 *)(param_1 + 0xc4) = 0;
      uVar1 = sub_0809EA8C(param_1,2);
      *(undefined4 *)(param_1 + 0xc4) = uVar1;
      *(undefined2 *)(param_1 + 200) = 0;
    }
    iVar2 = sub_080047C0(0x48);
    if (iVar2 != 0) {
      sub_08004768(0x48);
    }
    iVar2 = sub_080047C0(0x72);
    if (iVar2 != 0) {
      sub_08004768(0x72);
    }
    *(undefined *)(param_1 + 0x13) = 0;
    sub_0800471C(0x74);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0803ff28;
  if (((*(int *)(param_1 + 0xcc) != 0) && (*(int *)(param_1 + 0xc4) == 0)) &&
     (*(char *)(param_1 + 0x13) == '\0')) {
    sub_080177CC(param_1,*(short *)(param_1 + 200) + 6U | 0xa200,4,0);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x13) = 1;
  }
LAB_0803ff28:
  puVar3 = (undefined4 *)(param_1 + 0xc0);
  iVar2 = sub_08025794(*puVar3);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xcc);
    if (iVar2 == 0) {
      *puVar3 = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      if (*(byte *)(iVar2 + 0xc) < 2) {
        return in_lr;
      }
      *(int *)(param_1 + 0xcc) = 0;
      *puVar3 = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(undefined *)(param_1 + 0xf) = 0xff;
  }
  return in_lr;
}

