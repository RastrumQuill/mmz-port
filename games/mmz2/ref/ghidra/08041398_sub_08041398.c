// sub_08041398 at 0x08041398 (thumb)

undefined4 sub_08041398(int param_1)

{
  undefined uVar1;
  byte bVar2;
  undefined4 in_lr;
  bool bVar3;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbf) == '\a') {
      *(undefined *)
       (*(int *)(param_1 + 0xb4 +
                ((byte)(&DAT_0833a28c)[(uint)*(byte *)(param_1 + 0x13) * 6] + 4) * 4) + 0xd) = 0x1c;
      *(undefined *)
       (*(int *)(param_1 + 0xb4 +
                ((byte)(&DAT_0833a28c)[(uint)*(byte *)(param_1 + 0x13) * 6] + 4) * 4) + 0xe) = 0;
      sub_0809D4C4(param_1,0,*(undefined *)(param_1 + 0x13),0);
    }
    else {
      *(undefined *)
       (*(int *)(param_1 + 0xb4 +
                ((byte)(&DAT_0833a29e)[(uint)*(byte *)(param_1 + 0x13) * 6] + 4) * 4) + 0xd) = 0x1c;
      *(undefined *)
       (*(int *)(param_1 + 0xb4 +
                ((byte)(&DAT_0833a29e)[(uint)*(byte *)(param_1 + 0x13) * 6] + 4) * 4) + 0xe) = 0;
      sub_0809D4C4(param_1,1,*(undefined *)(param_1 + 0x13),0);
    }
    sub_080032EC(0x53);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) == '\x02') {
    bVar3 = *(char *)(param_1 + 0xbf) != '\a';
    if (bVar3) {
      uVar1 = *(undefined *)(param_1 + 0x13);
    }
    else {
      uVar1 = *(undefined *)(param_1 + 0x13);
    }
    sub_0809D4C4(param_1,bVar3,uVar1,1);
  }
  else if (*(char *)(param_1 + 0x12) == '\x04') {
    if (*(char *)(param_1 + 0xbf) == '\a') {
      sub_0809D4C4(param_1,0,*(undefined *)(param_1 + 0x13),2);
    }
    else {
      sub_0809D4C4(param_1,1,*(undefined *)(param_1 + 0x13),2);
    }
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if (7 < bVar2) {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

